# CS121_Week5


Hello World, What a lovely day it is in computer science land. I wanna make a game, but I don't know what we will have to edit tomorrow, so I'm going to make my own little OOP system here


```mermaid
classDiagram
    Race <|-- Horse
    class Horse{
      -int horseLabel
      -int horsePosition 
      + Horse()
      + init(int horseLabel, int horsePosition)   
      + bool isWinner()
      + advance()
      + printLane()
    }
    class Race{
      -int TRACKLENGTH
      -int NUM_HORSES
      -Horse horses[NUM_HORSES]
      +void start()
      +Race()
    }

```
