<?php

/**
 * Implements theme_preprocess_pane_messages().
 */
function numa_preprocess_pane_messages(&$vars) {

  // The default pane-messages.tpl.php accidentaly prints an empty div, so we must
  // correct that logic.
  if (empty($vars['tabs']['#primary']) && empty($vars['tabs']['#secondary'])) {
    $vars['tabs'] = array();
  }
}
