<?php 

// Art Gallery //
class HkmagNodeColumnNameMigration extends DrupalNode6Migration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // user reference field
    $this->addFieldMapping('field_author_ur', 'field_author_ur')
    ->sourceMigration('HkMagUsers');
    //->defaultValue('1');
    
  }

  public function sourceFieldList() {
    $fields = parent::sourceFieldList();
    return $fields;
  }

}
