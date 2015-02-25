<?php 

// Art Gallery //
class HkmagNodeColumnArticleMigration extends DrupalNode6Migration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);
    
    // text fields
    $this->addFieldMapping('field_slide_head', 'field_slide_head');
    $this->addFieldMapping('field_slide_head:language')
    ->defaultValue('und');
    $this->addFieldMapping('field_slide_teaser', 'field_slide_teaser');
    $this->addFieldMapping('field_slide_teaser:language')
    ->defaultValue('und');
    
    // text area
    $this->addFieldMapping('field_standfirst', 'field_standfirst');
    
    // date field
    $this->addFieldMapping('field_issue_date', 'field_issue_date');
    $this->addFieldMapping('field_issue_date:timezone')
    ->defaultValue('Asia/Hong_Kong');    

    // node reference field
    $this->addFieldMapping('field_column_name_nr', 'field_column_name_nr')
    ->sourceMigration('HkMagNodeColumnName');
        
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
    
    
    // images field
    $this->addFieldMapping('field_images', 'field_images')
    ->sourceMigration('HkMagFile');
    $this->addFieldMapping('field_images:file_class')
    ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_images:preserve_files')
    ->defaultValue(TRUE);
    $this->addFieldMapping('field_images:title', 'field_images:description')
    ->defaultValue('');
    //     $this->addFieldMapping('field_images:display', 'field_images:list');
    $this->addFieldMapping('field_images:alt', 'field_images:alt');
    $this->addFieldMapping('field_images:language')
    ->defaultValue(LANGUAGE_NONE);
    
    
  }

  public function sourceFieldList() {
    $fields = parent::sourceFieldList();
    return $fields;
  }

}
