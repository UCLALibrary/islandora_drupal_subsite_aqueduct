<?php

/**
 * @file
 * Provides a custom search block (simple keyword search) to a Search API views page.
 * Note: the view must have a url of /aqueduct/search  and the exposed fulltext filter should be
 * renamed "keyword", for this form to work as expected.
 */

$plugin = array(
  'title' => t('Custom Search API Views Search Block'),
  'description' => t('A custom search block to replace site search.'),
  'single' => TRUE,
  'render callback' => 'laadp_search_searchapi_block_render',
  'defaults' => array(),
  'category' => t('Page elements'),
  'edit form' => 'laadp_search_searchapi_block_edit_form',
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function laadp_search_searchapi_block_render($subtype, $conf, $args, $context) {
  // The output.
  $block = new stdClass();
  $block->title = t('Search');
  $keywords = isset($_GET['keywords']) ? $_GET['keywords'] : '';

  // This is pretty much a copy of the search form provided by search_api_page
  // with the form action url changed.
  $block->content = "
<div class='container-inline'>
  <form class='search-form' action='/aqueduct/search' method='get' id='search-form' accept-charset='UTF-8'>
    <div>
      <div class='form-item form-type-textfield form-item-keywords'>
        <label for='keywords'>Keyword Search</label>
        <input type='text' name='keywords' value='$keywords' size='40' maxlength='128' class='form-text'>
      </div>
    </div>
    <div class='form-actions'>
      <input type='submit' value='Search' class='form-submit'>
    </div>
  </form>
</div>
";
  return $block;
}

/**
 * 'Edit form' callback.
 */
function laadp_search_searchapi_block_edit_form($form, &$form_state) {
  return $form;
}
