import Lake
open Lake DSL

require batteries from git "https://github.com/leanprover-community/batteries.git" @ "v4.14.0"
require mathlib from git "https://github.com/leanprover-community/mathlib4.git" @ "v4.14.0"

require raylean from git "https://github.com/funexists/raylean.git" @ "3a60f54222e06767daa93e50a8fcbc68975eee4c" with
  NameMap.empty
    |>.insert `bundle "off"
    |>.insert `resvg "disable"

package "imagedenotation" where
  srcDir := "src"

lean_lib «ImageDenotation» where

@[default_target]
lean_exe "imagedenotation" where
  root := `Main
  moreLinkArgs := Id.run do
    let mut args := #[ "lib/libraylib.a"]
    if (← System.Platform.isOSX) then
      args := args ++
        #[ "-isysroot", "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk"
         , "-framework", "IOKit"
         , "-framework", "Cocoa"
         , "-framework", "OpenGL"
         ]
    args
