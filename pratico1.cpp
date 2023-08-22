from dataclasses import dataclass
import math

@dataclass
class Circle:
  radius: float
  
  def areaCircle(self) -> float:
    return math.pi * (self.radius ** 2)

@dataclass
class Square:
  width: float
  length: float
  
  def areaSquare(self) -> float:
    return self.width * self.length


Quadrado1 = Square(8,8)
Circulo1 = Circle(4)

Quadrado1_area = Quadrado1.areaSquare()
Circulo1_area = Circulo1.areaCircle()

print("Area do Quadrado: ",Quadrado1_area)
print("\nArea do circulo: ",Circulo1_area)
