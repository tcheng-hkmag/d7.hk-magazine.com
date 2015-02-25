<?php 

// Art Gallery //
class HkmagNodeColumnArticleMigration extends DrupalNode6Migration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // term reference
    $this->addFieldMapping('field_topics', 'field_topics')
    ->sourceMigration('HkMagTermTopics'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_topics:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermTopics');
       
    $this->addFieldMapping('field_author', 'field_author')
    ->sourceMigration('HkMagTermAuthor'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_author:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermAuthor');
    
    
  }

  public function sourceFieldList() {
    $fields = parent::sourceFieldList();
    return $fields;
  }

}
