# MyAllocator
模仿SGI二级分配器实现的自己的allocator，对于不同大小的内存申请分别管理。不回收小内存块
## 分配机制
+ 对于大于128Bytes的内存申请，走一级配置器-底层直接调用malloc，返回首地址。
+ 对于小于128Bytes的内存申请，将Size对齐到8的整数倍，从freeList[NFREELIST]中定位所需大小的Chunk链表，分配内存。
