/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSPComponentWriteChannel>, <TSPPackage>, NSError, NSObject<OS_dispatch_queue>, NSURL, SFUCryptoKey, TSPBundle, TSUPathSet, TSUZipFileWriter;

@interface TSPBundleWriter : NSObject <TSPPackageWriter> {
    NSURL *_URL;
    <TSPComponentWriteChannel> *_componentWriteChannel;
    TSUPathSet *_dataPathSet;
    SFUCryptoKey *_encryptionKey;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_errorQueue;
    BOOL _isClosed;
    TSUZipFileWriter *_objectArchiveWriter;
    BOOL _obscureAssetFilenames;
    <TSPPackage> *_originalDocumentPackage;
    <TSPPackage> *_originalSupportPackage;
    TSPBundle *_writtenBundle;
}

@property BOOL obscureAssetFilenames;
@property(readonly) NSURL * writeURL;

- (void).cxx_destruct;
- (BOOL)addData:(id)arg1 infoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; int x10; unsigned int x11[1]; }*)arg2 saveOperationState:(id)arg3;
- (void)closeWithQueue:(id)arg1 completion:(id)arg2;
- (void)copyComponent:(id)arg1 locator:(id)arg2 completion:(id)arg3;
- (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2;
- (id)dataFilenameForPreferredFilename:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 encryptionKey:(id)arg3 originalDocumentPackage:(id)arg4 originalSuppportPackage:(id)arg5 fileCoordinatorDelegate:(id)arg6 error:(id*)arg7;
- (id)linkOrCopyDataFromURL:(id)arg1 decryptionKey:(id)arg2 preferredFilename:(id)arg3;
- (id)newComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2;
- (BOOL)obscureAssetFilenames;
- (void)setObscureAssetFilenames:(BOOL)arg1;
- (BOOL)writeData:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (id)writeURL;
- (id)writtenPackage;

@end