Pod::Spec.new do |s|
  s.name = "JMMonitorView"
  s.version = "1.0.3"
  s.summary = "Camera monitor UIImage and OpenGL image view for Jimi iOS Platform."
  s.license = { :type => "Apache License 2.0", :file => "../LICENSE" }
  s.authors = {"Eafy"=>"lizhijian_21@163.com"}
  s.homepage = "https://github.com/JimiPlatform/JMMonitorView"
  s.description = "Camera monitor UIImage and OpenGL image view for Jimi iOS Platform."
  s.frameworks = ["GLKit", "AVFoundation", "VideoToolbox", "CoreVideo", "OpenGLES"]
  s.libraries = "c++"
  s.requires_arc = true
  s.source = { :http => "https://github.com/JimiPlatform/JimiRepoFile/raw/master/#{s.name}/#{s.name}-#{s.version}.zip", :type => "zip" }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'JMMonitorView.framework'
  s.dependency 'ZJLog'
end
