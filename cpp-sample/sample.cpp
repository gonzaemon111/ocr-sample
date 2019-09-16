#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
 
int main(){
    tesseract::TessBaseAPI *myOCR = new tesseract::TessBaseAPI();
    if (myOCR->Init(NULL, "eng")) { //英語で指定
          exit(1);
    }
 
    Pix *pix = pixRead("test.png"); //使用するファイル名
    myOCR->SetImage(pix);
 
    char* outText = myOCR->GetUTF8Text();
    printf(outText);
 
    myOCR->Clear();
    myOCR->End();
    delete [] outText;
    pixDestroy(&pix);
 
    return 0;
}
