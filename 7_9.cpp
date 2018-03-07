/**
Explain the data structures and algorithms that you would use to 
design an in-memory file systme. Illustrate
with an example in code where possible.
**/

/**
For data block allocation, we can use bitmask vector and linear search (see "practical
File System Design") or B+ trees.
**/
struct DataBLock { char data[DATA_BLOCK_SIZE]; };
DataBlock dataBLocks[NUM_DATA_BLOCKS];
struct INode {std::vector<int> datablocks; };
struct MetaData {
  int size;
  Date last_modified, created;
  char extra_attributes;
};
std::vector<bool> dataBLockUsed(NUM_DATA_BLOCKS);
std::map<string, INode *> mapFromName;
struct FSBase;
struct File : public FSBase {
  private:
    std::vector<INode> * nodes;
  Metadata metadata;
};

struct Directory : public FSBase {std::vector<FSBase* > content; };
struct FileSystem{
  init();
  mount(FileSystem*);
  unmount(FileSystem*);
  File createFile(const char* name) {... }
  Directory createDirectory(const char* name) { ... }
  //mapFromName to find INode corresponding ot file
  void openFile(File * file, FileMode mode) { ... }
void closeFile (File * file) { ... }
