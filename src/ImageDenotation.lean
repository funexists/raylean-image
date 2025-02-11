import Raylean
import ImageDenotation.Basic
import ImageDenotation.Image
import ImageDenotation.Render

open Raylean
open Raylean.Types

namespace ImageDenotation

def screenWidth := 200
def screenHeight := 200

def main : IO Unit := do
  initWindow screenWidth screenHeight "Image Denotation"
  setTargetFPS 10
  while not (← windowShouldClose) do
    renderFrame do
      render screenWidth screenHeight
        (Image.sover
          (Image.monochrome bluish)
          (Image.monochrome redish))
      drawFPS 100 100
  closeWindow
