// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_BROWSER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_BROWSER_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include <vector>
#include "include/cef_browser.h"
#include "include/capi/cef_browser_capi.h"
#include "include/cef_client.h"
#include "include/capi/cef_client_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefBrowserCToCpp
    : public CefCToCpp<CefBrowserCToCpp, CefBrowser, cef_browser_t> {
 public:
  explicit CefBrowserCToCpp(cef_browser_t* str)
      : CefCToCpp<CefBrowserCToCpp, CefBrowser, cef_browser_t>(str) {}
  virtual ~CefBrowserCToCpp() {}

  // CefBrowser methods
  virtual CefRefPtr<CefBrowserHost> GetHost() OVERRIDE;
  virtual bool CanGoBack() OVERRIDE;
  virtual void GoBack() OVERRIDE;
  virtual bool CanGoForward() OVERRIDE;
  virtual void GoForward() OVERRIDE;
  virtual bool IsLoading() OVERRIDE;
  virtual void Reload() OVERRIDE;
  virtual void ReloadIgnoreCache() OVERRIDE;
  virtual void StopLoad() OVERRIDE;
  virtual int GetIdentifier() OVERRIDE;
  virtual bool IsSame(CefRefPtr<CefBrowser> that) OVERRIDE;
  virtual bool IsPopup() OVERRIDE;
  virtual bool HasDocument() OVERRIDE;
  virtual CefRefPtr<CefFrame> GetMainFrame() OVERRIDE;
  virtual CefRefPtr<CefFrame> GetFocusedFrame() OVERRIDE;
  virtual CefRefPtr<CefFrame> GetFrame(int64 identifier) OVERRIDE;
  virtual CefRefPtr<CefFrame> GetFrame(const CefString& name) OVERRIDE;
  virtual size_t GetFrameCount() OVERRIDE;
  virtual void GetFrameIdentifiers(std::vector<int64>& identifiers) OVERRIDE;
  virtual void GetFrameNames(std::vector<CefString>& names) OVERRIDE;
  virtual bool SendProcessMessage(CefProcessId target_process,
      CefRefPtr<CefProcessMessage> message) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_BROWSER_CTOCPP_H_
