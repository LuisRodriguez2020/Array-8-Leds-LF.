/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                   Isaac                                            **
**                                                                               **
**********************************************************************************/

//********** Variables ************************************************************
//********** Variables ************************************************************
const int R1 = 7;
const int N1 = 8;
const int V1 = 9;
const int R2= 10;
const int N2 = 11;
const int V2 = 2;

//********** Setup ****************************************************************
void setup()
{
  
 pinMode(R1, OUTPUT);
 pinMode(N1, OUTPUT);
 pinMode(V1, OUTPUT);
 pinMode(R2, OUTPUT);
 pinMode(N2, OUTPUT);
 pinMode(V2, OUTPUT);
  
  digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);
}
void loop()
{


  digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(V2, HIGH);
  
  delay(700); //1000

  
  digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(V2, HIGH);

delay(700); //1000



  digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(V2, HIGH);
  
delay(700); //1000


 digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(V2, HIGH);
 delay(700); //1000




  digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(N2, HIGH);
  digitalWrite(V2, LOW);
  
delay(700); //1000




  digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);
  
delay(700); //1000




digitalWrite(R1, LOW);
  digitalWrite(N1, LOW);
  digitalWrite(V1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);
  
delay(700); //1000



digitalWrite(R1, LOW);
  digitalWrite(N1, LOW);
  digitalWrite(V1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);

delay(700); //1000

 

digitalWrite(R1, LOW);
  digitalWrite(N1, LOW);
  digitalWrite(V1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);

delay(700); //1000



digitalWrite(R1, LOW);
  digitalWrite(N1, LOW);
  digitalWrite(V1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);

delay(700); //1000



digitalWrite(R1, LOW);
  digitalWrite(N1, HIGH);
  digitalWrite(V1, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);
  
delay(700); //1000




digitalWrite(R1, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(V1, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(V2, LOW);

delay(700); //1000

}
