#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>


//e.g name is tile_53_42.jpg
#define FILE_PATH "tile_"
#define FILE_FORMAT ".jpg"


int main()
{
  int xScale[2]; //0->min, 1->max
  int yScale[2]; //0->min, 1->max
  int pictureScale[2]; //0->x, 1->y
  std::string output_name;

  std::cout << "enter x scale min: ";
  std::cin >> xScale[0];
  std::cout << "enter x sclae max: ";
  std::cin >> xScale[1];

  std::cout << "enter y scale min: ";
  std::cin >> yScale[0];
  std::cout << "enter y sclae max: ";
  std::cin >> yScale[1];

  std::cout << "enter picture width side (e.g: 256): ";
  std::cin >> pictureScale[0];
  std::cout << "enter picture height side (e.g: 256): ";
  std::cin >> pictureScale[1];

  std::cout << "enter a name for output file.";
  std::cin >> output_name;

  //init variables
  sf::Image result;
  sf::Image temp_picture;
  int x_seed=0;
  int y_seed=0;
  std::string file_dynamic_name = "";

  //init result  e.g: 63 picture for x, 63 picture for y each picture has 256pixel = 16128x and 16128y
  result.create(pictureScale[0]*xScale[1],
                pictureScale[1]*yScale[1],
                sf::Color::Black);


  //proccess
  for(int x=xScale[0]; x<=xScale[1]; x++)
  {
    for(int y=yScale[0]; y<=yScale[1]; y++)
    {
      file_dynamic_name = std::to_string(x) + "_" + std::to_string(y);
      std::string final_file_name = FILE_PATH + file_dynamic_name + FILE_FORMAT;
      std::cout << "current file: " << final_file_name << std::endl;
      if(!temp_picture.loadFromFile(final_file_name))
        std::cout << "[ERROR] cant load picture with path: " << final_file_name << std::endl;
      else
        result.copy(temp_picture, x_seed, y_seed); // Copy image1 on image2 at position (10, 10)
      y_seed+=pictureScale[1]; //got ot next section of Y position for next picture
    }


    y_seed=0;
    x_seed += pictureScale[0];
  }


  //save result
  if (!result.saveToFile(output_name))
      std::cout << "[ERROR] cant save to file the result.." << std::endl;
  else
      std::cout << "[SUCCESS] your final picture is ready, file saved as: " << output_name << std::endl;

  return 0;
}
