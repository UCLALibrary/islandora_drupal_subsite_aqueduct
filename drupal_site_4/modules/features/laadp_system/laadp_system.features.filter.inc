<?php
/**
 * @file
 * laadp_system.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function laadp_system_filter_default_formats() {
  $formats = array();

  // Exported format: Laadp Format.
  $formats['laadp_format'] = array(
    'format' => 'laadp_format',
    'name' => 'Laadp Format',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'wysiwyg' => array(
        'weight' => '-8',
        'status' => '1',
        'settings' => array(
          'valid_elements' => 'a[!href|target<_blank|title],
div[align<center?justify?left?right],
p[class|align<center?justify?left?right],
br,span,em,strong,strike,u,sub,sup,cite,code,blockquote,ul,ol,li,dl,dt,dd,
img[*],
h1,h2,h3,
@[class|style]',
          'allow_comments' => '0',
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(),
          'style_color' => array(
            'color' => 'color',
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 'font',
            'font-family' => 'font-family',
            'font-size' => 'font-size',
            'font-size-adjust' => 'font-size-adjust',
            'font-stretch' => 'font-stretch',
            'font-style' => 'font-style',
            'font-variant' => 'font-variant',
            'font-weight' => 'font-weight',
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 'text-indent',
            'text-transform' => 'text-transform',
            'letter-spacing' => 'letter-spacing',
            'word-spacing' => 'word-spacing',
            'white-space' => 'white-space',
            'direction' => 'direction',
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 'border',
            'border-top' => 'border-top',
            'border-right' => 'border-right',
            'border-bottom' => 'border-bottom',
            'border-left' => 'border-left',
            'border-width' => 'border-width',
            'border-top-width' => 'border-top-width',
            'border-right-width' => 'border-right-width',
            'border-bottom-width' => 'border-bottom-width',
            'border-left-width' => 'border-left-width',
          ),
          'style_border-2' => array(
            'border-color' => 'border-color',
            'border-top-color' => 'border-top-color',
            'border-right-color' => 'border-right-color',
            'border-bottom-color' => 'border-bottom-color',
            'border-left-color' => 'border-left-color',
            'border-style' => 'border-style',
            'border-top-style' => 'border-top-style',
            'border-right-style' => 'border-right-style',
            'border-bottom-style' => 'border-bottom-style',
            'border-left-style' => 'border-left-style',
          ),
          'style_dimension' => array(
            'height' => 'height',
            'line-height' => 'line-height',
            'max-height' => 'max-height',
            'max-width' => 'max-width',
            'min-height' => 'min-height',
            'min-width' => 'min-width',
            'width' => 'width',
          ),
          'style_positioning' => array(
            'bottom' => 'bottom',
            'clip' => 'clip',
            'left' => 'left',
            'right' => 'right',
            'top' => 'top',
            'vertical-align' => 'vertical-align',
            'overflow' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'clear' => 'clear',
            'display' => 'display',
            'float' => 'float',
            'position' => 'position',
            'visibility' => 'visibility',
          ),
          'style_list' => array(
            'list-style' => 'list-style',
            'list-style-image' => 'list-style-image',
            'list-style-position' => 'list-style-position',
            'list-style-type' => 'list-style-type',
          ),
          'style_table' => array(
            'border-collapse' => 'border-collapse',
            'border-spacing' => 'border-spacing',
            'caption-side' => 'caption-side',
            'empty-cells' => 'empty-cells',
            'table-layout' => 'table-layout',
          ),
          'style_user' => array(
            'outline' => 'outline',
            'outline-width' => 'outline-width',
            'outline-style' => 'outline-style',
            'outline-color' => 'outline-color',
            'cursor' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'rteleft',
            2 => 'rtecenter',
            4 => 'rteright',
            6 => 'rtejustify',
            8 => 'first',
            10 => 'second',
            12 => 'ucla-library',
          ),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(),
        ),
      ),
      'video_filter' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(
          'video_filter_width' => '400',
          'video_filter_height' => '400',
          'video_filter_autoplay' => '0',
          'video_filter_related' => '0',
          'video_filter_html5' => '1',
        ),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '10',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['full_html'] = array(
  		'format' => 'full_html',
  		'name' => 'Full HTML',
  		'cache' => '1',
  		'status' => '1',
  		'weight' => '5',
  		'filters' => array(
  				'filter_html' => array(
  						'weight' => '-49',
  						'status' => '1',
  						'settings' => array(
  								'allowed_html' => '<img><div><span><p><b><i><ul><ol><li><pre><table><tbody><tr><td><a><iframe><b><i>',
  								'filter_html_help' => 0,
  								'filter_html_nofollow' => 0,
  						),
  				),
  		),
  );

  return $formats;
}
