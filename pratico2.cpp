from dataclasses import dataclass
import math

@dataclass
class Circle:
  radius: float
  
  def areaCircle(self) -> float:
    return math.pi * (self.radius ** 2)

  def from_input():
      radius = float(input('(CIRCLE)Insert the radius:\n'))
      return Circle(radius)

@dataclass
class Square:
  width: float
  length: float
  
  def areaSquare(self) -> float:
    return self.width * self.length

  @staticmethod
  def from_input():
      width = float(input('(SQUARE)Insert the width:\n'))
      length = float(input('(SQUARE)Insert the Length:\n'))
      return Square(width, length)

Quadrado1 = Square.from_input()
Circulo1 = Circle.from_input()

Quadrado1_area = Quadrado1.areaSquare()
Circulo1_area = Circulo1.areaCircle()

print("Area do Quadrado: ",Quadrado1_area)
print("\nArea do circulo: ",Circulo1_area) 
