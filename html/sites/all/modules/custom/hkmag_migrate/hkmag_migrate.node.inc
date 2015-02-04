<?php 

class HkmagNodeHotelMigration extends DrupalNode6Migration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

//     $this->addFieldMapping('field_st_cross_ma', 1)
//          ->sourceMigration('HkMagTermMacauStreet')
//          ->arguments(array('source_type' => 'tid'));
//     $this->addFieldMapping('field_st_street_ma', 1)
//           ->sourceMigration('HkMagTermMacauStreet')
//           ->arguments(array('source_type' => 'tid'));

//     $this->addFieldMapping('field_area_ma', 'field_area_ma')
//           ->sourceMigration('HkMagTermMacauArea')
//           ->arguments(array('source_type' => 'tid'));
//     $this->addFieldMapping('field_st_cross_ma', 'field_st_cross_ma')
//           ->separator(';')
//           ->sourceMigration('HkMagTermMacauStreet');
//     $this->addFieldMapping('field_st_road_ma', 'field_st_road_ma')
//           ->separator(';')
//           ->sourceMigration('HkMagTermMacauStreet');

    
    $this->addFieldMapping('field_area_ma', 'field_area_ma')
    ->sourceMigration('HkMagTermMacauArea'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_area_ma:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermMacauArea');
    
    $this->addFieldMapping('field_st_road_ma', 'field_st_road_ma')
    ->sourceMigration('HkMagTermMacauStreet'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_st_road_ma:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermMacauStreet');
    
    $this->addFieldMapping('field_st_cross_ma', 'field_st_cross_ma')
    ->sourceMigration('HkMagTermMacauStreet'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_st_cross_ma:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermMacauStreet');
    
    
  }
  
  public function sourceFieldList() {
    $fields = parent::sourceFieldList();
    return $fields;
  }
}
