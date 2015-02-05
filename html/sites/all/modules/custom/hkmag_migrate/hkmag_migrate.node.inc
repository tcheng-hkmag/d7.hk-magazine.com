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

    // don't need to map:
    // taxonomy: area
    
    
    // text fields
    $this->addFieldMapping('field_website', 'field_website');
    $this->addFieldMapping('field_phone', 'field_phone');
    
    $this->addFieldMapping('field_building', 'field_building');
    $this->addFieldMapping('field_floor', 'field_floor');
    $this->addFieldMapping('field_room', 'field_room');
    $this->addFieldMapping('field_st_number', 'field_st_number');
    $this->addFieldMapping('field_postal_code', 'field_postal_code');
    $this->addFieldMapping('field_fax', 'field_fax');
    $this->addFieldMapping('field_email', 'field_email');
    $this->addFieldMapping('field_ed_contact_name', 'field_ed_contact_name');
    $this->addFieldMapping('field_ed_contact_title', 'field_ed_contact_title');
    $this->addFieldMapping('field_ed_contact_email', 'field_ed_contact_email');
    $this->addFieldMapping('field_ed_contact_mobile', 'field_ed_contact_mobile');
    $this->addFieldMapping('field_ed_contact_phone', 'field_ed_contact_phone');

    // boolean field
    $this->addFieldMapping('field_closed', 'field_closed');
    
    // text area
    $this->addFieldMapping('field_where_description', 'field_where_description');
    $this->addFieldMapping('field_guide_review', 'field_guide_review');
    $this->addFieldMapping('field_standfirst', 'field_standfirst');
    
    // date field
    $this->addFieldMapping('field_open_since', 'field_open_since');
    
    // location field
    $this->addFieldMapping('locations', 'locations');

    // fivestar rating
    $this->addFieldMapping('field_star_rating', 'field_star_rating');
    
    
    
    // node reference field
    //$this->addFieldMapping('field_related_hotel', 'field_related_hotel');
    
    // term reference
    $this->addFieldMapping('field_place_cities', 'field_place_cities')
    ->sourceMigration('HkMagTermPlaceCities'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_place_cities:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermPlaceCities');
    
    $this->addFieldMapping('field_country', 'field_country')
    ->sourceMigration('HkMagTermCountry'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_country:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermCountry');
    
    $this->addFieldMapping('field_st_road_hk', 'field_st_road_hk')
    ->sourceMigration('HkMagTermHkStreet'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_st_road_hk:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermHkStreet');
    
    $this->addFieldMapping('field_st_cross', 'field_st_cross')
    ->sourceMigration('HkMagTermHkStreet'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_st_cross:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermHkStreet');
    
    $this->addFieldMapping('field_area_hk', 'field_area_hk')
    ->sourceMigration('HkMagTermHkArea'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_area_hk:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermHkArea');
       
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
    
    // for images field
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
