(function($) {
  Drupal.behaviors.inputPlaceholder = {
    attach: function(context, settings) {
      // Input placeholder for IE 6,7,8,9
      if (navigator.userAgent.match('MSIE')) {
        if ( (navigator.userAgent.toLowerCase().indexOf('msie 6') != -1) || (navigator.userAgent.toLowerCase().indexOf('msie 7') != -1) || (navigator.userAgent.toLowerCase().indexOf('msie 8') != -1) || (navigator.userAgent.toLowerCase().indexOf('msie 9') != -1) ) {
          $('input[placeholder]').each(function() {
            var input = $(this);

            $(input).val(input.attr('placeholder'));

            $(input).focus(function() {
              if (input.val() == input.attr('placeholder')) {
                input.val('');
              }
            });

            $(input).blur(function() {
              if (input.val() == '' || input.val() == input.attr('placeholder')) {
                input.val(input.attr('placeholder'));
              }
            });

            $(this).parents('form').submit(function () {
              $(this).find('[placeholder]').each(function() {
                if ($(this).val() == $(this).attr('placeholder')) {
                  $(this).val('');
                }
              });
            });
          });
        }
      }
    }
  };
})(jQuery);
