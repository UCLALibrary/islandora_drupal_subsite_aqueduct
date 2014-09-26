<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Numa theme.
 */


function numa_active_tags_term_list_remove($variables) {
	global $user;

	if (in_array('LAADP Contributor', $user->roles)) {
		$output = '<div class="at-term-list">';
	  foreach ($variables['terms'] as $term) {
	    $output .= '<div id="at-term-' . $term->tid . '" class="at-term"><span class="at-term-text">' . $term->name . '</span></div> ';
	  }
	  $output .= '</div>';
	}
	else {
		$output = theme_active_tags_term_list_remove($variables);
	}

	return $output;
}
