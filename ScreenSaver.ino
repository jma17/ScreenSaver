/*
  MeggyJr_Blink.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Lights up screen saver as a colorful face on Meggy Screen.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()                     // run over and over again
{
for (int i=0; i<8; i++) 
   random(8);
    int i=random(2);
  
  {
    DisplaySlate();                  // Write the drawing to the screen.
    delay(500);                  // waits for a second
    ClearSlate();
    for (int j=0; j<8; j++) 
    random(8);
    int j=random(2);
      {
         for (int k=0; k<10000; k++) 
         random(6);
         int k=random(6);
        { 
          DrawPx(j+1,i+6,k);
          DrawPx(j+2,i+6,k);
          DrawPx(j+3,i+6,k);
          DrawPx(j+1,i+5,k);
          DrawPx(j+1,i+4,k);
          DrawPx(j+2,i+4,k);
          DrawPx(j+3,i+4,k);  
          DrawPx(j+3,i+5,k);
      
          DrawPx(j+4,i+6,k);
          DrawPx(j+4,i+5,k);
          DrawPx(j+4,i+4,k);
          DrawPx(j+5,i+4,k);
          DrawPx(j+6,i+4,k);
          DrawPx(j+6,i+5,k);
          DrawPx(j+6,i+6,k);
          DrawPx(j+5,i+6,k);
          DrawPx(j+4,i+6,k);
      
          DrawPx(j+1,i+2,k);
          DrawPx(j+1,i+1,k);
          DrawPx(j+2,i+1,k);
          DrawPx(j+3,i+1,k);
          DrawPx(j+4,i+1,k);
          DrawPx(j+5,i+1,k);
          DrawPx(j+6,i+1,k);
          DrawPx(j+6,i+2,k);
          DrawPx(j+5,i+2,k);
          DrawPx(j+4,i+2,k);
          DrawPx(j+3,i+2,k);
          DrawPx(j+2,i+2,k);
      
        }
      }
    }
  }





