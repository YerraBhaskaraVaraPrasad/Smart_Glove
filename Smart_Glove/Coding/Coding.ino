float a,d,r;
float b,c,e,f,g,h,i,j,k;
void setup()
{
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  Serial.begin(9600);
}
void loop()
{
  a=analogRead(A2);
  d=(a*5)/1023;
  r=(1000*d)/(5-d);
  //flex sensor1
  b=analogRead(A3);
  f=(b*5)/1023;
  i=(1000*f)/(5-f);
  //flex sensor2
  c=analogRead(A4);
  g=(c*5)/1023;
  j=(1000*g)/(5-g);
  //flex sensor3
  e=analogRead(A5);
  h=(e*5)/1023;
  k=(1000*h)/(5-h);
  //flex sensor4
 
  
  //writing code for all flex sensors


  if(    r<80000 and i<50000 and j<50000 and k>50000){
    Serial.println("hi");
  }

//end of one combination

  else if(    r<80000 and i<50000 and j>50000 and k<50000){
    Serial.println("hello");
  }
  
  //end of one combination

  else if(    r<80000 and i<50000 and j>50000 and k>50000){
    Serial.println("water");
  }
  
  //end of one combination  

  else if(    r<80000 and i>50000 and j<50000 and k<50000){
    Serial.println("thank you");
  }
  
//end of one combination 
//completed 100 and start with 101
  else if(    r<80000 and i>50000 and j<50000 and k>50000){
    Serial.println("hungry");
  }
  
//end of one combination 

  else if(    r<80000 and i>50000 and j>50000 and k<50000){
    Serial.println("sorry");
  }
 
  //end of one combination

  else if(    r<80000 and i>50000 and j>50000 and k>50000){
    Serial.println("give me that");
  }
  
  //end of one combination
  else if(    r>80000 and i<50000 and j<50000 and k<50000){
    Serial.println("ok");
  }
  
  //end of one combination

   else if(    r>80000 and i<50000 and j<50000 and k>50000){
    Serial.println("food");
  }
  
  //end of one combination

  else if(    r>80000 and i<50000 and j>50000 and k<50000){
    Serial.println("come here");
  }
  
  //end of one combination10

  else if(    r>80000 and i<50000 and j>50000 and k>50000){
    Serial.println("catch it");
  }
  
  //end of one combination

  else if(    r>80000 and i>50000 and j<50000 and k<50000){
    Serial.println("sleep");
  }
  
//end of one combination 

  else if(    r>80000 and i>50000 and j<50000 and k>50000){
    Serial.println("see left");
  }
  
//end of one combination 
  
  else if(    r>80000 and i>50000 and j>50000 and k<50000){
    Serial.println("see right");
  }
  
  //end of one combination

  else if(    r>80000 and i>50000 and j>50000 and k>50000){
    Serial.println("see back");
  }
  
  //end of one combination

  delay(5000);
}
