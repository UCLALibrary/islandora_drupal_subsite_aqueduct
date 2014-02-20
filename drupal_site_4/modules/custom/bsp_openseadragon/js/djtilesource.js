(function($) {
  /**
  * An OpenSeadragon interface for the Djatoka tile server.  It is based
  * on Doug Reside's DjatokaSeadragon, but modified to work with the newer fork
  * of OpenSeadragon that's being developed by Chris Thatcher at LoC.
  *
  * https://github.com/dougreside/DjatokaSeadragon
  * https://github.com/thatcher/openseadragon
  *
  * @class
  * @extends Seadragon.TileSource
  * @param {string} imageID
  *   The UR{I,L} of the image.
  */
  $.DjatokaTileSource = function(imageID, settings) {
    var that = this;
    var djatoka_get_params = {
      'url_ver': 'Z39.88-2004',
      'rft_id': imageID,
      'svc_id': 'info:lanl-repo/svc/getMetadata'
    };
    this.baseURL = 'http://digital.library.ucla.edu/adore-djatoka/resolver';
    this.imageID = imageID;
    var options;
    var djatoka_get_success = function(data, textStatus, jqXHR) {
      options = {
        width: parseInt(data.width),
        height: parseInt(data.height),
        tileSize: settings.tileSize,
        tileOverlap: settings.tileOverlap,
        minLevel: 1,
        maxLevel: parseInt(data.levels),
      };
    };

    var proxy_url = Drupal.settings.basePath + 'proxy'
    var url = this.baseURL + '?' + jQuery.param(djatoka_get_params);
    jQuery.ajaxSetup({async: false});
    jqxhr = jQuery.get(proxy_url, {request : url}, djatoka_get_success, 'json');
    jqxhr.fail(function () {
      alert("Error getting the Djatoka resource.");
    });
    jQuery.ajaxSetup({async:true});
    $.TileSource.apply(this, [ options ]);
  };

  $.extend($.DjatokaTileSource.prototype, $.TileSource.prototype, {
    /**
    * @function
    * @name Seadragon.DjatokaTileSource.prototype.getTileUrl
    * @param {Number} level
    * @param {Number} x
    * @param {Number} y
    */
    getTileUrl: function(level, x, y) {
      var bounds = this.getTileBounds(level, x, y);
      var scale = this.getLevelScale(level);
      var region = (bounds.y * this.dimensions.y * this.aspectRatio).toFixed() + ',' +
        (bounds.x * this.dimensions.x).toFixed() +  ',' + this.tileSize + ',' + this.tileSize;
      // Djatoka parameters
      var params = {
        'url_ver': 'Z39.88-2004',
        'rft_id': this.imageID,
        'svc_id': 'info:lanl-repo/svc/getRegion',
        'svc_val_fmt': 'info:ofi/fmt:kev:mtx:jpeg2000',
        'svc.region': region,
        'svc.level': level
      };
      return this.baseURL + '?' + jQuery.param(params);
    }
  });
}(OpenSeadragon));
