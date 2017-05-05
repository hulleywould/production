node 'wiki' {

  hiera_include('classes')

}

class linux {

  $admintools = ['git','nano','screen']

  package { $admintools:
    ensure  => 'installed',
  }

  $ntpservice = $osfamily ? {
    'redhat' => 'ntpd',
    'debian' => 'ntp',
    default  => 'ntp',
  }

  file { '/info.txt':
    ensure  => 'present',
    content => inline_template("Created by Puppet at <%= Time.now %>\n"),
  }

  file { '/var/lib/puppet/state/agent_catalog_run.lock':
    ensure => 'absent',
  }

  package { 'ntp':
    ensure  => 'installed',
  }

  package { 'openscap-scanner':
    ensure  => 'installed',
  }

  package { 'scap-security-guide':
    ensure  => 'installed',
  }

  service { $ntpservice:
    ensure  => 'running',
    enable  => true,
  }


}
