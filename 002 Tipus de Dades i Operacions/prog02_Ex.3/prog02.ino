/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 3;
int b = 4;
int h = 0;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin (9600);
  
  Serial.println ("Lets calculate a hypoteneuse");

  Serial.print (" a = ");
  Serial.println (a);

  Serial.print (" b = ");
  Serial.println ( b );

  int h = sqrt ( (sq(a)) + (sq(b)));

  int result;

  Serial.print (" h =  ");
  Serial.println ( h );
  
  

}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************