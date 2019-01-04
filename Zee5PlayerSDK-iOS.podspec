Pod::Spec.new do |s|

  s.name         = "Zee5PlayerSDK-iOS"
  s.version      = "1.0.7"
  s.summary      = "Zee5 Player SDK for iOS."

  s.homepage     = "https://github.com/RajnishKumar1987/Zee5PlayerSDK-iOS"
  s.license      = { :type => "Apache 2.0", :file => "LICENSE" }

  s.authors      = { "Rajnish kumar" => "rajnish.kumar@zee.esselgroup.com" }

  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/RajnishKumar1987/Zee5PlayerSDK-iOS.git", :tag => s.version.to_s }

  s.ios.vendored_frameworks = "ZEE5PlayerSDK.framework"
  s.dependency 'JWPlayer-SDK', '~> 3.0'
  s.dependency 'GoogleAds-IMA-iOS-SDK', '~> 3.8'
  s.requires_arc = true

end