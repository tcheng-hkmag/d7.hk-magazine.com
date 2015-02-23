<?php 

// User profile //
class HkmagNodeUserMigration extends DrupalUser6Migration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);
   
    // text fields
    $this->addFieldMapping('field_first_name', 'profile_firstname');
    $this->addFieldMapping('field_last_name', 'profile_lastname');
    $this->addFieldMapping('field_mobile_phone', 'profile_mobile_phone');    
    $this->addFieldMapping('field_city', 'profile_city');
    $this->addFieldMapping('field_state', 'profile_state');
    $this->addFieldMapping('field_profile_country', 'profile_country');
    $this->addFieldMapping('field_zip', 'profile_zip');
    $this->addFieldMapping('field_irank', 'profile_iRank');
    $this->addFieldMapping('field_nickname', 'profile_nickname');
    $this->addFieldMapping('field_photo', 'profile_photo');
    $this->addFieldMapping('field_url', 'profile_url');
    $this->addFieldMapping('field_other_occupation', 'profile_otheroccupation');
        
//     // list fields
//     $this->addFieldMapping('field_how_long', 'profile_how_long');
//     $this->addFieldMapping('field_gender', 'profile_gender');
//     $this->addFieldMapping('field_country_origin', 'profile_country_origin');
//     $this->addFieldMapping('field_country_residence', 'profile_country_residence');
//     $this->addFieldMapping('field_monthly_income', 'profile_monthly_income');
//     $this->addFieldMapping('field_interests', 'profile_interests');
//     $this->addFieldMapping('field_newsletter_hk', 'profile_newsletter_hk');
//     $this->addFieldMapping('field_newsletter_list', 'profile_newsletter_list');
//     $this->addFieldMapping('field_occupation', 'profile_occupation');
    
    // boolean field
    $this->addFieldMapping('field_tos', 'profile_tos');
    
    // date field
    $this->addFieldMapping('field_birthdate', 'profile_birthdate');
    $this->addFieldMapping('field_birthdate:timezone')
    ->defaultValue('Asia/Hong_Kong');
    
  }
  
  public function sourceFieldList() {
    $fields = parent::sourceFieldList();
    return $fields;
  }
  
}


