


#include "head.h"
#include "head1.h"
#include <ESP8266WiFi.h>
#include <Arduino_JSON.h>
#include <ESP8266HTTPClient.h>
int p;
HTTPClient http;   
HTTPClient http1;   
HTTPClient http2; 
const char* ssid =  "OnePlus Nord2 5G";     // Enter your WiFi Network's SSID
const char* pass =  "123456789";
char server[] = "api.openweathermap.org";     
WiFiClient client;
WiFiClient client1;
int t=1;
  void setup() {
    Serial.begin(115200);
       delay(10);
      Serial.println("Connecting to ");
       Serial.println(ssid);
 
 
       WiFi.begin(ssid, pass);

      while (WiFi.status() != WL_CONNECTED) 
     { 
            delay(100);
            Serial.print("*");
           
     }
      Serial.println("");
      Serial.println("***WiFi connected***");

    pinMode(D4, INPUT);
   pinMode(D5,INPUT);
   pinMode(D0, INPUT);
}

void loop() {    
  
{
  http.begin(client1,"http://api.openweathermap.org/data/2.5/forecast?lat=17.9689&lon=79.5941&appid=b1552b58884eff0f01f08ec73c206a52");
  delay(1000); 
 while( http.GET()<0);
  
  String s3=http.getString();
  http.end();
   int temp=(s3.substring(74,77)).toInt();
   int humi=(s3.substring(198,200)).toInt();
  
   float sor = analogRead(A0);
   http2.begin(client,"http://thingsboard.cloud/api/v1/qTM2LWeTT9l80QmMYSa9/telemetry");
    
http2.addHeader("Content-Type", "application/json");
p=http2.POST("{\"To change season \": long press button ")<0;
while(p<0){p=http2.POST( "{\"To change season \": long press button ");
  
  
}delay(200);
 int  t1= digitalRead(D4);
temp-=273.15;

Serial.println(temp);
delay(1000);
if(t1==HIGH){temp+=20; digitalWrite(D0, HIGH);}
Serial.println(temp);
 sor=(1-(sor/1023))*100;
   Serial.println(sor);
    // replace with your actual feature vector
  
    
     float input[7] = {33, 35,40,temp, humi,6,121};  
     float input1[8] = {temp, humi,sor,3,6,33, 35,40}; //red sand 
  
//     
String s;String s1;
    Serial.print("Prediction: ");
    int i=blobClassifier.predict(input);
    int j=blobClassifie.predict(input1);
    if(i==0)
   s="apple";
     if(i==1)
    s="banana";
     if(i==2)
    s="blackgram";
     if(i==3)
    s="chickpea";
     if(i==4)
   s="coconut";
     if(i==5)
     s="coffee";
     if(i==6)
    s="cotton";
     if(i==7)
   s="grapes";
     if(i==8)
    s="jute";
     if(i==9)
    s="kidneybeans";
     if(i==10)
  s="lentils";
     if(i==11)
     s="maize";
    if(i==12)
     s="mango";
     if(i==13)
   s="mothbeans";
     if(i==14)
     s="mungbean";
     if(i==15)
     s="muskmelon";
     if(i==16)
   s="orange";
     if(i==17)
  s="papaya";
    if(i==18)
   s="piegeonpeas";
     if(i==19)
   s="promogranate";
     if(i==20)
  s="rice";
     if(i==21)
 s="watermelon";
     Serial.print("Prediction: ");
     
    if(j==0)
    s1="10-26-26";
     if(j==1)
    s1="14-35-14";
     if(j==2)
     s1="17-17-17";
     if(j==3)
    s1="20-20";
     if(j==4)
      s1="28-28";
     if(j==5)
  s1="DAP";
     if(j==6)
  s1="Urea";
   String s4=+"{\"CROP PREDICTION\":";
   String s5=",\"FERTILIZER PREDICTION\":";
   String s6="}";
http1.begin(client,"http://thingsboard.cloud/api/v1/qTM2LWeTT9l80QmMYSa9/telemetry");
    
http1.addHeader("Content-Type", "application/json");
p=http1.POST(s4+s+s5+s1+s6)<0;
while(p<0){p=http1.POST( s4+s+s5+s1+s6);
  
  
}


 
  }
}
