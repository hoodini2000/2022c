import processing.sound.*;
SoundFile sound;
void setup(){
  size(800,400);
  sound=new SoundFile(this,"dot.wav");
}
String line = "type:";
void draw(){
  background(255,0,0);
  textSize(30);
  text(line,50,50);
}
void keyPressed(){
  sound.play();
  line +=key;
}
