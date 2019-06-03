#include <iostream>

std::string mix(std::string color1, std::string color2){
    std::string mixed_color, blue, red, yellow;
    if((color1 == "blue"|| color1 == "red") && (color2 == "blue"|| color2 == "red")){
        mixed_color = "purple";
    }
    else if((color1 == "red"|| color1 == "yellow") && (color2 == "red"|| color2 == "yellow")){
        mixed_color = "orange";
    }
    else{
        mixed_color = "green";
    }
    return mixed_color;
}

int main(){
    std::string color1, color2, newColor;
    std::cin >> color1;
    std::cin >> color2;
    newColor = mix(color1,color2);
    std::cout << newColor << std::endl;
    return 0;
}
