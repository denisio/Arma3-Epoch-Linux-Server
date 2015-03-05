StorageSlotsLimit = 1500; // Max storage slots allowed. Warning! Higher the number lower performance.
BuildingSlotsLimit = 1500; // Max building slots allowed. Warning! Higher the number lower performance.

// Time based
StaticDateTime[] = {2035,6,10,7,0}; // {0,0,0,8,0} would forces the server to start at 8am each time it is started while allowing the year, month and day to stay real time. Any values left at 0 will result in no change.
timeDifference = 0; // Server uses real time this will allow you to offset just the hour.
timeMultiplier = 4; // Sets a time multiplier for in-game time. The command range is now capped at 0.1 - 120 to avoid performance problems.

// Events
WeatherChangeTime = 1200; // This controls how fast the weather changes as well as how fast shipping containers and earthquakes happen.
SpecialEventTime = 2400;
NormalEventTime = 1200;
PlantSpawnTime = 2400;
showEarthQuakes = true; // used to show locations of earthquakes
showShippingContainers = true; // used to show locations of shipping containers

// Antagonists
antagonistChanceTrash = 0.03; //3% chance when player loot a trash object
antagonistChancePDeath = 0.25; //25% chance when player was killed from a other player (selfkill doesn't count)
antagonistChanceLoot = 0.03; //3% chance when player click "SEARCH" on a loot object

// Player Related
cloneCost = 100; // debt incurred on player death

// vehicles - Max vehicle slots is calculated from per vehicle limits below. Warning! Higher the number lower the performance.
vehicleLockTime = 1800; // Controls how many seconds it takes to allow another person/group to unlock vehicle.
allowedVehiclesList[] = {
	{"C_Offroad_01_EPOCH",8},
	{"C_Quadbike_01_EPOCH",8},
	{"C_Hatchback_01_EPOCH",10},
	{"C_Hatchback_02_EPOCH",10},
	{"C_SUV_01_EPOCH",10},
	{"C_Rubberboat_EPOCH",5},
	{"C_Rubberboat_02_EPOCH",5},
	{"C_Rubberboat_03_EPOCH",5},
	{"C_Rubberboat_04_EPOCH",5},
	{"C_Van_01_box_EPOCH",8},
	{"C_Van_01_transport_EPOCH",9},
	{"C_Boat_Civil_01_EPOCH",5},
	{"C_Boat_Civil_01_police_EPOCH",5},
	{"C_Boat_Civil_01_rescue_EPOCH",5},
	{"B_Heli_Light_01_EPOCH",2},
	{"B_SDV_01_EPOCH",2},
	{"B_MRAP_01_EPOCH",3},
	{"B_Truck_01_transport_EPOCH",1},
	{"B_Truck_01_covered_EPOCH",2},
	{"B_Truck_01_mover_EPOCH",1},
	{"B_Truck_01_box_EPOCH",1},
	{"O_Truck_02_covered_EPOCH",2},
	{"O_Truck_02_transport_EPOCH",1},
	{"O_Truck_03_covered_EPOCH",1},
	{"O_Truck_02_box_EPOCH",1},
	{"I_Heli_light_03_unarmed_EPOCH",1},
	{"O_Heli_Light_02_unarmed_EPOCH",1},
	{"I_Heli_Transport_02_EPOCH",1},
	{"O_Heli_Transport_04_EPOCH",1},
	{"O_Heli_Transport_04_bench_EPOCH",1},
	{"O_Heli_Transport_04_box_EPOCH",1},
	{"O_Heli_Transport_04_covered_EPOCH",1},
	{"B_Heli_Transport_03_unarmed_EPOCH",1},
	{"jetski_epoch",7},
	{"K01",2},
	{"K02",2},
	{"K03",2},
	{"K04",2},
	{"ebike_epoch",7},
	{"mosquito_epoch",7}
};

// Traders
taxRate = 0.1; // controls the price increase for purchases
SHOW_TRADERS = true; // used to show locations of traders
NPCSlotsLimit = 50; // Max number of traders static or dynamic. Warning! Higher the number lower performance.
forceStaticTraders = true; // disables traders moving from work to home

// Hive Related
expiresBuilding = "604800";  // expiration date in seconds for buildings
expiresPlayer = "2592000";  // expiration date in seconds for players
expiresBank = "7776000";  // expiration date in seconds for players bank
expiresVehicle = "604800";  // expiration date in seconds for vehicles
hiveAsync = false; // true = asynchronous hive calls (non blocking), false = synchronous hive calls (blocking)

// Debug Related
DEBUG_VEH = false; // DEBUG ONLY used to debug spawing of vehicles
