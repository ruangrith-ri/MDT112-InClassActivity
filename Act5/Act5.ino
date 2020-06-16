int mynum [5] ={10,20,30,40,50};
 int *mypoint = mynum;
void setup()
{
    Serial.begin(9600);

     //แบบpointer
    for (int i=0; i<5; i++)
    {
       Serial.println("Address"+ String(i)+" = "+int(mypoint)+
       "value :"+ int(*mypoint)); 
         mypoint++;

         
    }
   
   Serial.println("--------------------------------------------------------------");
  
   //แบบindex
   for (int i=0; i<5; i++) 
   {
      Serial.println("Address"+ String(i)+" = "+int(&mynum [i])+
      "value :"+ int(mynum [i])); 
   }


}

void loop()
{

}