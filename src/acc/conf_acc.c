/**
* Fujinet config desk ACC for the Atari ST
*
*  Plan: Get it to work as a .prg as well (Auto folder)
*/
#include <osbind.h>
#include <gem.h>
#include <stdio.h>

/**
 * Helper functions 
 */
int close_app() {return 0;}
int init_app()
{

  int prog_handle = appl_init();

  if (prog_handle != 0)
    (void)  menu_register(prog_handle,"  FujiNet config");
  else
    return -1;
  
  return 0;
}
int main_program()
{

  short evt_buff[16];
  while (1) 
    {
      (void) evnt_mesag(evt_buff);

      // check if ACC menu item is clicked
      if (evt_buff[0] == 40)
	{
	  // Do stuff
	  printf("Doing stuff here...\n");
	}
    }
  
}
int main()
{
  
  if (init_app() == -1)
    goto close;
  main_program();
  close:
  close_app();
 
  return 0; 
}
 