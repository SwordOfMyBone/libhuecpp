project('huecpp', 'cpp',
  version : '1.0.0',
  license : 'MIT')
add_global_arguments('-DSOME_TOKEN=value', language : 'cpp')
cpr_dep = dependency('cpr', method : 'cmake', modules : ['cpr::cpr'])

inc = include_directories('include')

subdir('include')
subdir('src')
# subdir('test')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : libhuecpp,
                 version : '1.0',
                 name : 'libhuecpp',
                 filebase : 'huecpp',
                 description : 'A Library to barnicate your foos.')

