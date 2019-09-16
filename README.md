# OCR Sample

## コマンド

Tesseract を使って、pngからenglishでresult.txtが生成される。

```shell
$ tesseract test.png result -l eng
```

## 他の言語で実装したい場合

Finderの`↑⌘ G`で以下に移動

/usr/local/Cellar/tesseract/4.1.0/share/tessdata/

https://github.com/tesseract-ocr/tessdataから、`**.traineddata`を入れる。

```shell
$ tesseract test.png result2 -l jpn
```

そうすると、以上のような日本語でTesseractができる。
