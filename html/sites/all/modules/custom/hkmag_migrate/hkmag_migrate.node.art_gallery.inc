<?php 

// Art Gallery //
class HkmagNodeArtGalleryMigration extends DrupalNode6Migration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // don't need to map:
    // taxonomy: area
    // Where Coordinate (no data)


    // text fields
    $this->addFieldMapping('field_website', 'field_website');
    $this->addFieldMapping('field_phone', 'field_phone');
    $this->addFieldMapping('field_building', 'field_building');
    $this->addFieldMapping('field_floor', 'field_floor');
    $this->addFieldMapping('field_room', 'field_room');
    $this->addFieldMapping('field_st_number', 'field_st_number');
    $this->addFieldMapping('field_postal_code', 'field_postal_code');
    $this->addFieldMapping('field_ed_contact_name', 'field_ed_contact_name');
    $this->addFieldMapping('field_ed_contact_title', 'field_ed_contact_title');
    $this->addFieldMapping('field_ed_contact_email', 'field_ed_contact_email');
    $this->addFieldMapping('field_ed_contact_mobile', 'field_ed_contact_mobile');
    $this->addFieldMapping('field_ed_contact_phone', 'field_ed_contact_phone');

    // interger field
    $this->addFieldMapping('field_extraction_info', 'field_extraction_info');
    
    // boolean field
    $this->addFieldMapping('field_closed', 'field_closed');

    // text area
    $this->addFieldMapping('field_where_description', 'field_where_description');
    $this->addFieldMapping('field_guide_review', 'field_guide_review');
    $this->addFieldMapping('field_standfirst', 'field_standfirst');

    // date field
    $this->addFieldMapping('field_open_since', 'field_open_since');
    $this->addFieldMapping('field_open_since:timezone')
    ->defaultValue('Asia/Hong_Kong');
    $this->addFieldMapping('field_last_fact_check', 'field_last_fact_check');
    $this->addFieldMapping('field_last_fact_check:timezone')
    ->defaultValue('Asia/Hong_Kong');
    $this->addFieldMapping('field_issue_date', 'field_issue_date');
    $this->addFieldMapping('field_issue_date:timezone')
    ->defaultValue('Asia/Hong_Kong');    
    $this->addFieldMapping('field_last_reviewed', 'field_last_reviewed');
    $this->addFieldMapping('field_last_reviewed:timezone')
    ->defaultValue('Asia/Hong_Kong');    
    $this->addFieldMapping('field_time_from_1', 'field_time_from_1');
    $this->addFieldMapping('field_time_from_1:timezone')
    ->defaultValue('Asia/Hong_Kong');    
    $this->addFieldMapping('field_time_from_2', 'field_time_from_2');
    $this->addFieldMapping('field_time_from_2:timezone')
    ->defaultValue('Asia/Hong_Kong');    
    $this->addFieldMapping('field_time_from_3', 'field_time_from_3');
    $this->addFieldMapping('field_time_from_3:timezone')
    ->defaultValue('Asia/Hong_Kong');
    $this->addFieldMapping('field_time_from_4', 'field_time_from_4');
    $this->addFieldMapping('field_time_from_4:timezone')
    ->defaultValue('Asia/Hong_Kong');
    $this->addFieldMapping('field_time_to_1', 'field_time_to_1');
    $this->addFieldMapping('field_time_to_1:timezone')
    ->defaultValue('Asia/Hong_Kong');
    $this->addFieldMapping('field_time_to_2', 'field_time_to_2');
    $this->addFieldMapping('field_time_to_2:timezone')
    ->defaultValue('Asia/Hong_Kong');
    $this->addFieldMapping('field_time_to_3', 'field_time_to_3');
    $this->addFieldMapping('field_time_to_3:timezone')
    ->defaultValue('Asia/Hong_Kong');
    $this->addFieldMapping('field_time_to_4', 'field_time_to_4');
    $this->addFieldMapping('field_time_to_4:timezone')
    ->defaultValue('Asia/Hong_Kong');
    
    
    // list fields
    $this->addFieldMapping('field_set_day', 'field_set_day');
    $this->addFieldMapping('field_set_day_to_1', 'field_set_day_to_1');
    $this->addFieldMapping('field_set_day_2', 'field_set_day_2');
    $this->addFieldMapping('field_set_day_to_2', 'field_set_day_to_2');
    $this->addFieldMapping('field_set_day_3', 'field_set_day_3');
    $this->addFieldMapping('field_set_day_to_3', 'field_set_day_to_3');
    $this->addFieldMapping('field_set_day_4', 'field_set_day_4');
    $this->addFieldMapping('field_set_day_to_4', 'field_set_day_to_4');
    
    // node reference field
    $this->addFieldMapping('field_related_hotel', 'field_related_hotel')
    ->sourceMigration('HkMagNodeHotel');
    
    // user reference field
    $this->addFieldMapping('field_fact_checked_by', 'field_fact_checked_by')
    ->sourceMigration('HkMagUsers');
    
    

    // term reference
    $this->addFieldMapping('field_payment_accepted', 'field_payment_accepted')
    ->sourceMigration('HkMagTermPaymentAccepted'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_payment_accepted:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermPaymentAccepted');
    
    $this->addFieldMapping('field_tags', 'field_tags')
    ->sourceMigration('HkMagTermTags'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_tags:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermTags');
    
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
    
    $this->addFieldMapping('field_art_genre', 'field_art_genre')
    ->sourceMigration('HkMagTermArtStyle'); // This is the machine name of the tags migration.
    // This tells the migration to match on the term ID instead of the default, which is the term name.
    $this->addFieldMapping('field_art_genre:source_type')
    ->defaultValue('tid')
    ->sourceMigration('HkMagTermArtStyle');

    // for images field   
    $this->addFieldMapping('field_main_image', 'field_main_image')
    ->sourceMigration('HkMagFile');
    $this->addFieldMapping('field_main_image:file_class')
    ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_main_image:preserve_files')
    ->defaultValue(TRUE);
    $this->addFieldMapping('field_main_image:language')
    ->defaultValue(LANGUAGE_NONE);
    
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
    
//     // for location field
    $this->addFieldMapping('field_location:name', 'name');
    $this->addFieldMapping('field_location:street', 'street');
    $this->addFieldMapping('field_location:additional', 'additional');
    $this->addFieldMapping('field_location:city', 'city');
    $this->addFieldMapping('field_location:province', 'province');
    $this->addFieldMapping('field_location:postal_code', 'postal_code');
    $this->addFieldMapping('field_location:country', 'country');
    $this->addFieldMapping('field_location:latitude', 'latitude');
    $this->addFieldMapping('field_location:longitude', 'longitude');
    $this->addFieldMapping('field_location:source', 'source');

  }

  public function sourceFieldList() {
    $fields = parent::sourceFieldList();
    return $fields;
  }

  // join the location table to map the location fields
  protected function query() {
    $query = parent::query();
    // Join location table, which is not CCK
    $query->join('location_instance', 'i', 'i.nid = n.nid AND i.vid = n.vid');
    $query->join('location', 'l', 'l.lid = i.lid');
    $query->fields('l', array('name', 'street', 'additional', 'city', 'province', 'postal_code', 'country', 'latitude', 'longitude', 'source'));
    return $query;
  }
}
