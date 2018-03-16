/**
Implement the "paint fill" function that one might see on many image editing
programs. That is, given a screen (represented by a 2-dimensional array of Colors),
a point, and a new color, fill in the surrounding area until you hit a border
of that color.

**/

/**
First, let's visualize how this method works. When we call Paint Fill (eg, 
"click" paint fill in the image editing application) on, say, a green 
pixel, we want to "bleed" outwards. Pixel by pixel, we expand outwards 
calling PaintFill on the surrounding pixel. When we hit a pixel that is
not geen, we stop. Surrounding green pixels may still be painted if 
they are touched by another Paint Fill operation.
We can implement this algorithm recursively:
**/
enum Color{
  Black, White, Red, yellow, Green
}
boolean PaintFilL(color[][] screen, int x, int y, Color ocolor, 
                  Color ncolor){
  if (x < 0 || x >= screen[0].length || 
      y < 0 || y >= screen.length){
    return false;
  }
  if (screen[y][x] == ocolr){
    screen[y][x] = ncolor;
    PaintFill(screen, x-1, y, ocolor, ncolor); //left
    PaintFill(screen, x+1, y, ocolor, ncolor); //right
    PaintFill(screen, x, y-1, ocolor, ncolor); //top
    PaintFill(screen, x, y+1, ocolor, ncolor); //bottom
  }
  return true;
}

boolean PaintFill(Color[][] screen, int x, int y, Color ncolor){
  return PaintFill(screen, x, y, screen[y][x], ncolor);
}

