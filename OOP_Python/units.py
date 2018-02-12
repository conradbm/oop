class Unit(object):
    def __init__(self, name):
        self.unitName = name
        print("Abstract Unit Created.")

class BlueUnit(Unit):
    def __init__(self, name):
        super(BlueUnit, self).__init__(name)
        print("Concrete Unit Created.")
        
class PlatformFactory():
    
    def __init__(self):
        print("Platform Factory Created.")
    @classmethod
    def createSensorPlatform(self):
        print("Sensor Created.")
    @classmethod
    def createTankPlatform(self):
        print("Tank Created.")
    @classmethod
    def createPaladinPlatform(self):
        print("Paladin Created.")

class UnitFactory(object):
    pf = PlatformFactory()
    def createUnitA(self):
        raise NotImplementedError("Should have implemented this")
        
class BlueUnitFactory(UnitFactory):
    def __init__(self):
        print("Blue Unit Factory Created.")

    @classmethod
    def createUnitA(self):
        [self.pf.createSensorPlatform() for i in range(10)]
        [self.pf.createTankPlatform() for i in range(10)]
        [self.pf.createPaladinPlatform() for i in range(10)]
        print("Blue Unit Created!")
        

BlueUnit("silly")
buf =BlueUnitFactory
buf.createUnitA()
