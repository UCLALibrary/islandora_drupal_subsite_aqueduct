<?php
/**
 * @file
 * Template for the Omega Grid 2 layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div<?php print $attributes ?>>
  <?php if (!empty($content['top'])): ?>
  <div class="panel-col-top">
    <?php print render($content['top']); ?>
  </div> <!-- /.panel-col-top -->
  <?php endif; ?>


  <?php if (!empty($content['above_one']) || !empty($content['above_two'])): ?>
  <div class="panel-col-above">
    <div class="panel-col-above-one"><?php print render($content['above_one']); ?></div>
    <div class="panel-col-above-two"><?php print render($content['above_two']); ?></div>
  </div> <!-- /.panel-col-above -->
  <?php endif; ?>

  <?php if (!empty($content['main'])): ?>
  <div class="panel-col-main">
    <?php print render($content['main']); ?>
  </div> <!-- /.panel-col-main -->
  <?php endif; ?>

  <?php if (!empty($content['middle_one']) || !empty($content['middle_two'])): ?>
  <div class="panel-col-middle">
    <div class="panel-col-middle-one"><?php print render($content['middle_one']); ?></div>
    <div class="panel-col-middle-two"><?php print render($content['middle_two']); ?></div>
  </div> <!-- /.panel-col-middle -->
  <?php endif; ?>

  <?php if (!empty($content['bottom'])): ?>
  <div class="panel-col-bottom">
    <?php print render($content['bottom']); ?>
  </div> <!-- /.panel-col-bottom -->
  <?php endif; ?>
</div>
