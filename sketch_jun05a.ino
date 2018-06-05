int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int BUTTON = 6;
int i;
int brillo;
int brillo2;
const int pot =0;
int contador=0;

int r=255;
int b=51;
int g=255;
int r1;
int b1;
int g1;


//comment this line if using a Common Catode LED
#define COMMON_ANODE

void setup()
{
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop()
{


brillo = analogRead (pot) / 4; 
if(b != 0){
b1=b-brillo;
}
else{
b1=b;
};
if(r != 0){
r1=r-brillo;
}
else{
r1=r;
};
if(g != 0){
g1=g-brillo;
}
else{
g1=g;
};


if(b1 <0 || r1 <0 || g1 <0 ){
b1=0;
r1=0;
g1=0;
}
else{
b1=b1;
r1=r1;
g1=g1;};

setColor(r1, g1, b1);
//for(i=0; i<256; i++){ 
//analogWrite(redPin,brillo);
// analogWrite(greenPin,brillo);
// analogWrite(bluePin,brillo);
// delay(30);
// }





}

void setColor(int red, int green, int blue)
{
#ifdef COMMON_ANODE
red = 255 - red;
green = 255 - green;
blue = 255 - blue;
#endif
analogWrite(redPin, red);
analogWrite(greenPin, green);
analogWrite(bluePin, blue); 
}
