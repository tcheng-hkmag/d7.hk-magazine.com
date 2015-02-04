<?php 

class HkmagRoleMigration extends DrupalRoleMigration {
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addSimpleMappings(array('weight'));
  }
}