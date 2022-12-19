# Hanh Nguyen
# CSC119125
# Final Project: Ghost Town Final Project.

# Write a program that reads the data files of Ghost Town populations and areas
# writes out the Ghost Town population density for each town to a file named “GhostTownPopDensity.txt”.

# Hints: Use Camel Case for other variables for this program.
# Step one: get 2 input (population, area) 1 output (the Ghost Town) files

# Step 2: Set up a constant w/ a file names, and ask the user for the file name
# Step 3: This program uses a while loop
# Step 4: list(len =0) will return the members in the list has 2 pieces: town name(area) and population of datas
# Create a function named "extractDataRecord"
# def extractDataRecord(infile)

#Constant variable: All UPPERCASE variables


# This program uses to read the data files of Ghost Town populations, areas.

# Declare constant variables

POPULATION_FILE = 'GhostTownPop.txt'
AREA_FILE = 'GhostTownArea.txt'
DENSITY_FILE = 'GhostTownPopDensity.txt'


def main():
    
     # Get the input population File Name from the Users.
     popName = input('Enter the population file name example GhostTownPop.txt : ')

     # Get the input area File Name from the Users.
     areaName = input('Enter the ghost town area file name example GhostTownArea.txt : ')

     #Get the input density File Name from the users. 
     densityName = input('Enter the Ghost Town density file name example GhostTownPopDensity.txt : ')
     
     # Get the data file of Ghost Town Populations/ Open popName data file for reading.
     popFile = open(popName, "r")

     # Get the data file of Ghost Town Area/ Open areaName data file for reading.
     areaFile = open(areaName, "r")

     #Get the data file of Ghost Town Population Density/ Open densityName data file for writing.
     reportFile = open(densityName, "w")


     # Read the first population data record. Why do we read here before we loop?
     popData = extractDataRecord(popFile)

     
     # Create 2 columns Ghost Town Name and State, Density. Underline each column name.
     reportFile.write("Ghost Town Name and State" + "\t" + "Density\n")
     reportFile.write('_'*25)
     reportFile.write("\t")
     reportFile.write('_'*7)
     reportFile.write("\n")
    
     # The program uses a while loop to process the files and their data.
     while len(popData) == 2:
          
          # Read the next area data record
          areaData = extractDataRecord(areaFile)
          
          # Extract the data components from the two lists.
          Town = popData[0]  # 0 start with 1st element.
          Population = popData[1] # 1 start with 2nd element.
          Area = areaData[1]
          
          # Compute and print the population density.
          density = 0.0
          if Area > 0 :
               
               # Check and Protect against division by zero.
               Density = Population / Area
               reportFile.write("%-25s%10.2f\n" % (Town, Density))
               # Use reportFile.write with format specifier %-25s and %10.2f\n" % (Town,Density), example: reportFile.write("%-25s%10.2f\n" % (Town, Density))
               
          # Read the next population data record. Why do we continute to read here after we loop?
          popData = extractDataRecord(popFile)
          
     
    
     # Close the files.
     popFile.close()
     areaFile.close()
     reportFile.close()

     # Open densityName in r mode to write to a destination file.
     #destinationFile = open(densityName, "r")
     

     #Get each source data line.
     #for eachline in destinationFile:
          
          #Write each source data line to the destination file.
          #newReportFile.write(eachline + "\n")
          
          # Write a line to the destination file.
          #newReportFile.write('_' * 15)
          #newReportFile.write("\n")
          
     # Close the destination file.
     #newReportFile.close()
     #destinationFile.close()
     

def extractDataRecord(inFile):
     line = inFile.readline()
     if line == "" : #we are done after we return a list
        return []
     else :
          parts = line.rsplit(" ", 1)
          parts[1] = int(parts[1])
          return parts
 

# Call the main function after defining the main function.
if __name__ == '__main__':
    main()




