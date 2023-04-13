void setup(){
  pinMode(7, INPUT);
  // int Light = analogRead(A5);
  int readValue = digitalRead(7); 
  Serial.begin(9600);

   Serial.println(readValue);
//    if(readValue == HIGH){
//    for (int i=0; i<=10; i= i+1);
// { Serial.println(Light);}
//   }
}  
  
void loop() {
   int Light = analogRead(A5);
   int readValue = digitalRead(7);
   Serial.println(readValue);
   if(readValue == HIGH){
    for (int i=0; i<=10; i= i+1);
   { Serial.println(Light);}
   }  
  // delay(100);


  // 버튼이 눌렸을 때 "테스트 시작"
  
  // put your main code here, to run repeatedly:
  //버튼 2를 눌렀을 때 "테스트, 종료"
  
}
