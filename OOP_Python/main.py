# Author: Blake Conrad
# Goal: Write a consise version of Kmeans from scratch

import numpy as np
import pandas as pd
import sys


from classes.Point import Point
from classes.Kmeans import Kmeans



def main():

    # Default Variables
    argc = len(sys.argv)
    programName=""
    dataFileName=""
    k=0
    centroidsFileName=""
    centroids_inits=list()
    
    # Example ::: python main.py iris.txt 5
    if(argc == 3):
        programName = sys.argv[0]
        dataFileName = sys.argv[1]
        k = sys.argv[2]
        

    # Example ::: python main.py iris.txt 5 centroids.txt
    elif(argc == 4):
        programName = sys.argv[0]
        dataFileName = sys.argv[1]
        k = sys.argv[2]
        centroidsFileName = sys.argv[3]
        with open("data/"+centroidsFileName) as f:
            for line in f:
                centroids_inits.append(line[:-1])
                
    df = pd.read_csv("data/"+dataFileName,
                      sep=",",
                      names=["Septal Length",
                            "Septal Width",
                            "Pedal Length",
                            "Pedal Width"],
                     dtype=np.float32)

    
    D = df.as_matrix()

    # Set up the model
    kmeans = Kmeans(D, k, 0.001, centroids_inits)

    print kmeans.currentState()
    # Fit the model (returns indices)
if __name__ == "__main__":
    main()
