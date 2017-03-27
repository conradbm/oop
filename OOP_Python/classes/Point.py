class Point:

    # Class Attributes
    numPoints=0
    
    def __init__(self, row):
        if(isinstance(row, list)):
            self.value = np.array(row, dtype=np.float)
        else:
            try:
                self.value = np.array(row, dtype=np.float)
            except Exception:
                print "Error occured: ", Exception, "\n"


    def displayPoint(self):
        print self.value
