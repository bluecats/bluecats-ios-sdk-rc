Pod::Spec.new do |s|
  s.name     = 'libBlueCatsSDK'
  s.version  = '2.0.1.rc.1'
  s.license      = {
    :type => 'Commercial',
    :text => <<-LICENSE
              All text and design is copyright © 2011-2016 Plus Location Systems, LLC.

              All rights reserved.

              https://bluecats.com/tos/
    LICENSE
  }
  s.summary  = 'BlueCatsSDK for micro-location.'
  s.homepage = 'http://www.bluecats.com'
  s.authors   = { 'BlueCats' => 'theteam@bluecats.com' }
  s.source   = { :git => 'https://github.com/bluecats/bluecats-ios-sdk-rc.git', :tag => '2.0.1.rc.1' }
  s.platform = :ios, '7.0'
  s.public_header_files = 'Headers/*.h'
  s.source_files = ['Headers/*.h']
  s.vendored_libraries = 'libBlueCatsSDK.a'
  s.requires_arc = true
  s.ios.deployment_target = '7.0'
  s.frameworks = 'SystemConfiguration', 'CoreBluetooth', 'MobileCoreServices', 'CoreGraphics', 'CoreLocation', 'AdSupport', 'CoreData'
  
  s.xcconfig  =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/libBlueCatsSDK/"', 'OTHER_LDFLAGS' => '$(inherited) "-ObjC"'}
end
