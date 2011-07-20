<?php
/**
 * @file
 * d7_news.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function d7_news_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = 'articles/[node:title]';
  $export['pathauto_node_article_pattern'] = $strongarm;

  return $export;
}
