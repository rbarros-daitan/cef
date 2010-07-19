// Copyright (c) 2009 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/stream_reader_cpptoc.h"
#include "libcef_dll/ctocpp/handler_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeCreated(
    CefRefPtr<CefBrowser> parentBrowser, CefWindowInfo& windowInfo, bool popup,
    CefRefPtr<CefHandler>& handler, std::wstring& url)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_created))
    return RV_CONTINUE;

  cef_browser_t* browserStruct = NULL;
  if(parentBrowser.get())
    browserStruct = CefBrowserCppToC::Wrap(parentBrowser);

  cef_handler_t* handlerStruct = NULL;
  if(handler.get())
    handlerStruct = CefHandlerCToCpp::Unwrap(handler);
  cef_handler_t *origHandlerStruct = handlerStruct;

  cef_string_t urlRet = NULL;
  if(!url.empty())
    urlRet = cef_string_alloc(url.c_str());

  cef_retval_t rv = struct_->handle_before_created(struct_,
    browserStruct, &windowInfo, popup, &handlerStruct, &urlRet);

  if(handlerStruct && handlerStruct != origHandlerStruct) {
    // The handler was changed.
    if(handlerStruct)
      handler = CefHandlerCToCpp::Wrap(handlerStruct);
    else
      handler = NULL;
  }

  transfer_string_contents(urlRet, url, true);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleAfterCreated(
    CefRefPtr<CefBrowser> browser)
{
  if(CEF_MEMBER_MISSING(struct_, handle_after_created))
    return RV_CONTINUE;

  return struct_->handle_after_created(struct_,
      CefBrowserCppToC::Wrap(browser));
}

CefHandler::RetVal CefHandlerCToCpp::HandleAddressChange(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const std::wstring& url)
{
  if(CEF_MEMBER_MISSING(struct_, handle_address_change))
    return RV_CONTINUE;

  return struct_->handle_address_change(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      url.c_str());
}

CefHandler::RetVal CefHandlerCToCpp::HandleTitleChange(
    CefRefPtr<CefBrowser> browser, const std::wstring& title)
{
  if(CEF_MEMBER_MISSING(struct_, handle_title_change))
   return RV_CONTINUE;

  return struct_->handle_title_change(struct_, CefBrowserCppToC::Wrap(browser),
      title.c_str());
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeBrowse(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request, NavType navType, bool isRedirect)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_browse))
    return RV_CONTINUE;

  return struct_->handle_before_browse(struct_, CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame), CefRequestCppToC::Wrap(request),
      navType, isRedirect);
}

CefHandler::RetVal CefHandlerCToCpp::HandleLoadStart(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame)
{
  if(CEF_MEMBER_MISSING(struct_, handle_load_start))
    return RV_CONTINUE;

  cef_frame_t* frameStruct = NULL;
  if(frame.get())
    frameStruct = CefFrameCppToC::Wrap(frame);

  return struct_->handle_load_start(struct_, CefBrowserCppToC::Wrap(browser),
      frameStruct);
}

CefHandler::RetVal CefHandlerCToCpp::HandleLoadEnd(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame)
{
  if(CEF_MEMBER_MISSING(struct_, handle_load_end))
    return RV_CONTINUE;

  cef_frame_t* frameStruct = NULL;
  if(frame.get())
    frameStruct = CefFrameCppToC::Wrap(frame);

  return struct_->handle_load_end(struct_, CefBrowserCppToC::Wrap(browser),
      frameStruct);
}

CefHandler::RetVal CefHandlerCToCpp::HandleLoadError(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    ErrorCode errorCode, const std::wstring& failedUrl,
    std::wstring& errorText)
{
  if(CEF_MEMBER_MISSING(struct_, handle_load_error))
    return RV_CONTINUE;

  cef_string_t errorTextRet = NULL;
  if(!errorText.empty())
    errorTextRet = cef_string_alloc(errorText.c_str());

  cef_retval_t rv = struct_->handle_load_error(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame), errorCode,
      failedUrl.c_str(), &errorTextRet);

  transfer_string_contents(errorTextRet, errorText, true);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeResourceLoad(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefRequest> request,
    std::wstring& redirectUrl, CefRefPtr<CefStreamReader>& resourceStream,
    std::wstring& mimeType, int loadFlags)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_resource_load))
    return RV_CONTINUE;

  cef_string_t redirectUrlRet = NULL;
  cef_string_t mimeTypeRet = NULL;
  cef_stream_reader_t* streamRet = NULL;

  if(!redirectUrl.empty())
    redirectUrlRet = cef_string_alloc(redirectUrl.c_str());
  
  cef_retval_t rv = struct_->handle_before_resource_load(struct_,
      CefBrowserCppToC::Wrap(browser), CefRequestCppToC::Wrap(request),
      &redirectUrlRet, &streamRet, &mimeTypeRet, loadFlags);

  transfer_string_contents(redirectUrlRet, redirectUrl, true);
  transfer_string_contents(mimeTypeRet, mimeType, true);

  if(streamRet)
    resourceStream = CefStreamReaderCppToC::Unwrap(streamRet);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeMenu(
    CefRefPtr<CefBrowser> browser, const MenuInfo& menuInfo)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_menu))
    return RV_CONTINUE;

  return struct_->handle_before_menu(struct_, CefBrowserCppToC::Wrap(browser),
      &menuInfo);
}

CefHandler::RetVal CefHandlerCToCpp::HandleGetMenuLabel(
    CefRefPtr<CefBrowser> browser, MenuId menuId, std::wstring& label)
{
  if(CEF_MEMBER_MISSING(struct_, handle_get_menu_label))
    return RV_CONTINUE;

  cef_string_t labelRet = NULL;
  if(!label.empty())
    labelRet = cef_string_alloc(label.c_str());

  cef_retval_t rv = struct_->handle_get_menu_label(struct_,
      CefBrowserCppToC::Wrap(browser), menuId, &labelRet);

  transfer_string_contents(labelRet, label, true);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleMenuAction(
    CefRefPtr<CefBrowser> browser, MenuId menuId)
{
  if(CEF_MEMBER_MISSING(struct_, handle_menu_action))
    return RV_CONTINUE;

  return struct_->handle_menu_action(struct_, CefBrowserCppToC::Wrap(browser),
      menuId);
}

CefHandler::RetVal CefHandlerCToCpp::HandlePrintHeaderFooter(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefPrintInfo& printInfo, const std::wstring& url,
    const std::wstring& title, int currentPage, int maxPages,
    std::wstring& topLeft, std::wstring& topCenter, std::wstring& topRight,
    std::wstring& bottomLeft, std::wstring& bottomCenter,
    std::wstring& bottomRight)
{
  if(CEF_MEMBER_MISSING(struct_, handle_print_header_footer))
    return RV_CONTINUE;

  cef_string_t topLeftRet = NULL, topCenterRet = NULL, topRightRet = NULL,
      bottomLeftRet = NULL, bottomCenterRet = NULL, bottomRightRet = NULL;

  if(!topLeft.empty())
    topLeftRet = cef_string_alloc(topLeft.c_str());
  if(!topCenter.empty())
    topCenterRet = cef_string_alloc(topCenter.c_str());
  if(!topRight.empty())
    topRightRet = cef_string_alloc(topRight.c_str());
  if(!bottomLeft.empty())
    bottomLeftRet = cef_string_alloc(bottomLeft.c_str());
  if(!bottomCenter.empty())
    bottomCenterRet = cef_string_alloc(bottomCenter.c_str());
  if(!bottomRight.empty())
    bottomRightRet = cef_string_alloc(bottomRight.c_str());

  cef_retval_t rv = struct_->handle_print_header_footer(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      &printInfo, url.c_str(), title.c_str(), currentPage, maxPages,
      &topLeftRet, &topCenterRet, &topRightRet, &bottomLeftRet,
      &bottomCenterRet, &bottomRightRet);

  transfer_string_contents(topLeftRet, topLeft, true);
  transfer_string_contents(topCenterRet, topCenter, true);
  transfer_string_contents(topRightRet, topRight, true);
  transfer_string_contents(bottomLeftRet, bottomLeft, true);
  transfer_string_contents(bottomCenterRet, bottomCenter, true);
  transfer_string_contents(bottomRightRet, bottomRight, true);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleJSAlert(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const std::wstring& message)
{
  if(CEF_MEMBER_MISSING(struct_, handle_jsalert))
    return RV_CONTINUE;

  return struct_->handle_jsalert(struct_, CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame), message.c_str());
}

CefHandler::RetVal CefHandlerCToCpp::HandleJSConfirm(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const std::wstring& message, bool& retval)
{
  if(CEF_MEMBER_MISSING(struct_, handle_jsconfirm))
    return RV_CONTINUE;

  int ret = 0;
  cef_retval_t rv = struct_->handle_jsconfirm(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      message.c_str(), &ret);
  retval = (ret ? true : false);
  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleJSPrompt(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const std::wstring& message, const std::wstring& defaultValue,
    bool& retval, std::wstring& result)
{
  if(CEF_MEMBER_MISSING(struct_, handle_jsprompt))
    return RV_CONTINUE;

  cef_string_t resultRet = NULL;
  if(!result.empty())
    resultRet = cef_string_alloc(result.c_str());

  int ret = 0;
  cef_retval_t rv = struct_->handle_jsprompt(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      message.c_str(), defaultValue.c_str(), &ret, &resultRet);
  retval = (ret ? true : false);

  transfer_string_contents(resultRet, result, true);

  return rv;
}

CefHandler::RetVal CefHandlerCToCpp::HandleBeforeWindowClose(
    CefRefPtr<CefBrowser> browser)
{
  if(CEF_MEMBER_MISSING(struct_, handle_before_window_close))
    return RV_CONTINUE;

  return struct_->handle_before_window_close(struct_,
      CefBrowserCppToC::Wrap(browser));
}

CefHandler::RetVal CefHandlerCToCpp::HandleTakeFocus(
    CefRefPtr<CefBrowser> browser, bool reverse)
{
  if(CEF_MEMBER_MISSING(struct_, handle_take_focus))
    return RV_CONTINUE;

  return struct_->handle_take_focus(struct_, CefBrowserCppToC::Wrap(browser),
      reverse);
}

CefHandler::RetVal CefHandlerCToCpp::HandleSetFocus(
    CefRefPtr<CefBrowser> browser, bool isWidget)
{
  if(CEF_MEMBER_MISSING(struct_, handle_set_focus))
    return RV_CONTINUE;

  return struct_->handle_set_focus(struct_, CefBrowserCppToC::Wrap(browser),
      isWidget);
}

CefHandler::RetVal CefHandlerCToCpp::HandleKeyEvent(
    CefRefPtr<CefBrowser> browser, KeyEventType type, int code, int modifiers,
    bool isSystemKey)
{
  if(CEF_MEMBER_MISSING(struct_, handle_key_event))
    return RV_CONTINUE;

  return struct_->handle_key_event(struct_, CefBrowserCppToC::Wrap(browser),
      type, code, modifiers, isSystemKey);
}

CefHandler::RetVal CefHandlerCToCpp::HandleConsoleMessage(
    CefRefPtr<CefBrowser> browser, const std::wstring& message,
    const std::wstring& source, int line)
{
  if(CEF_MEMBER_MISSING(struct_, handle_console_message))
    return RV_CONTINUE;

  return struct_->handle_console_message(struct_,
      CefBrowserCppToC::Wrap(browser), message.c_str(), source.c_str(), line);
}

CefHandler::RetVal CefHandlerCToCpp::HandleFindResult(
    CefRefPtr<CefBrowser> browser, int identifier, int count,
    const CefRect& selectionRect, int activeMatchOrdinal, bool finalUpdate)
{
  if(CEF_MEMBER_MISSING(struct_, handle_find_result))
    return RV_CONTINUE;

  return struct_->handle_find_result(struct_,
      CefBrowserCppToC::Wrap(browser), identifier, count, &selectionRect,
      activeMatchOrdinal, finalUpdate);
}


#ifdef _DEBUG
long CefCToCpp<CefHandlerCToCpp, CefHandler, cef_handler_t>::DebugObjCt = 0;
#endif

