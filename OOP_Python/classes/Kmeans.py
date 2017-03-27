class Kmeans:

    # Class Attributes
    centroidsSpecified=False
    meanCandidates=list()
    
    def __init__(self, D, k, e, centroids=None):
        if (type(D) == 'numpy.ndarray'):
            self.D = D
        if (type(k) == 'str'):
            self.k = k
        else:
            self.k = int(k)
        if (type(e) == 'str'):
            self.e = e
        else:
            self.e = int(e)
        if(len(centroids)==0):
            # no centroids given
            Kmeans.centroidsSpecified=False
        else:
            self.meanIndices=[int(val) for val in centroids]
            Kmeans.centroidsSpecified=True
            Kmeans.meanCandidates.append([D[i]for i in self.meanIndices])

    def currentState(self):
        print self.D
        print self.k
        print self.e
        print Kmeans.meanCandidates
        
