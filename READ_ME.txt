# Filename: READ_ME.txt

DIRECTORY ORGANIZATION:

- Screenshots
	- ...
	- ...
	- ...
- CSV File
	- submission_data.csv
- Supplements
	- store_process.cpp
	- pairs of m,s,v,gi.txt
	- normalized_store.txt
	- store.txt
	- unique_grp.txt
- manipulation.cpp
- manipulation
- outputt.txt
- values.txt
- READ_ME.txt

FILE DESCRIPTIONS:

- Screenshots
	- Related screenshots of all files, directories, and programs
- CSV File
	- submission_data.csv (This is the final output CSV file (2 columns - ID and Value), converted from outputt.txt into CSV format)
- Supplements
	- store_process.cpp (Processing File of stores information; like normalization of store ID N10 to N9a)
	- pairs of m,s,v,gi.txt (Sorted pairs of months, stores, values, group_index)
	- normalized_store.txt (Output file of store_process.cpp, normalized store IDs)
	- store.txt (Input file of store_process.cpp, un-normalized store IDs)
	- unique_grp.txt (Extracted 81 unique groups from working_dataset out of 26985 rows)
- manipulation.cpp (Main source file, HEAVILY DOCUMENTED, REFER IT)
- manipulation (Object file for manipulation.cpp, if you don't want to recompile it, use it)
- outputt.txt (Output file of manipulation.cpp, tuples(IDs, and Value) in required order)
- values.txt (Processed value input file of manipulation.cpp, From working_dataset.csv provided, but in SORTED ORDER (storeID, MonthID, Group))
- READ_ME.txt (This file)
