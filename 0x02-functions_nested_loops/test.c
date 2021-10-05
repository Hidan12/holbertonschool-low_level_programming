1 #include "main.h"
  2
  3 /**
  4   * jack_bauer - prints every minute for 24 hrs
  5   *
  6   * Return: Always 0
  7   */
8 void jack_bauer(void)
9 {
	10         int dh = 0, uh, dm, um, uhb = 9;
	 11
		 12         while (dh <= 2)
				    13         {
					    14                 uh = 0;
					    15                 while (uh <= uhb)
								       16                 {
									       17                         dm = 0;
									       18                         while (dm <= 5)
														  19                         {
															  20                                 um = 0;
															  21                         while (um <= 9)
																			     22                         {
																				     23                                 _putchar(dh + '0');
																				     24                                 _putchar(uh + '0');
																				     25                                 _putchar(58);
																				     26                                 _putchar(dm + '0');
																				     27                                 _putchar(um + '0');
																				     28                                 _putchar(10);
																				     29                                 um++;
																				      30                         
																					      }
															  31                         dm++;
															   32                         
																   }
									       33                         uh++;
									       34                         if (uh == 9)
										       uhb = 3;
}
