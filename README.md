# ProceduralHorseRace
In this lab I will create a procedural horse race game that uses rng to determine what horse wins and loses.

main():
  checls to see if start the game is true:
    changes startgame variable to false
    run printTrack function
  check to see if a horse won:
    tells user what horse(es) won
    ask if they want to continue
    checks to see if it is yes:
      reset needed variables
      run code again
    checks to see if its a no:
      tells user that the game wont continue
      kills the game
  else statement:
    tells user to press enter for continuance (holds the code until the user prints something, no need for if statmenet)
    run rng function

Track():
  print trackArray 5x
  for loop for the horse #:
    grab rng move(): (should return a true or false)
    
