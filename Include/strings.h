/*
MIT License

Copyright (c) 2016-2017

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once
#include "plugin.h"
#include "utility.h"

#define P_TRANSLATE(x)				Utility::obs_module_text_multi(x)
#define P_DESC(x)					x ".Description"

// Shared
#define P_VERSION					"Version"
#define P_UTIL_DEFAULT				"Utility.Default"
#define P_UTIL_AUTOMATIC			"Utility.Automatic"
#define P_UTIL_MANUAL				"Utility.Manual"
#define P_UTIL_SWITCH_DISABLED		"Utility.Switch.Disabled"
#define P_UTIL_SWITCH_ENABLED		"Utility.Switch.Enabled"

// Presets
#define P_PRESET					"Preset"
#define P_PRESET_RESETTODEFAULTS	"Preset.ResetToDefaults"
#define P_PRESET_RECORDING			"Preset.Recording"
#define P_PRESET_HIGHQUALITY		"Preset.HighQuality"
#define P_PRESET_INDISTINGUISHABLE	"Preset.Indistinguishable"
#define P_PRESET_LOSSLESS			"Preset.Lossless"
#define P_PRESET_TWITCH				"Preset.Twitch"
#define P_PRESET_YOUTUBE			"Preset.YouTube"

// Static
//#define P_USAGE						"Usage"
//#define P_USAGE_TRANSCODING			"Usage.Transcoding"
//#define P_USAGE_ULTRALOWLATENCY		"Usage.UltraLowLatency"
//#define P_USAGE_LOWLATENCY			"Usage.LowLatency"
//#define P_USAGE_WEBCAM				"Usage.Webcam"
#define P_QUALITYPRESET				"QualityPreset"
#define P_QUALITYPRESET_SPEED		"QualityPreset.Speed"
#define P_QUALITYPRESET_BALANCED	"QualityPreset.Balanced"
#define P_QUALITYPRESET_QUALITY		"QualityPreset.Quality"
#define P_PROFILE					"Profile"
#define P_PROFILELEVEL				"ProfileLevel"
#define P_TIER						"Tier"
#define P_ASPECTRATIO				"AspectRatio"
#define P_CODINGTYPE				"CodingType"
#define P_CODINGTYPE_CABAC			"CodingType.CABAC"
#define P_CODINGTYPE_CAVLC			"CodingType.CAVLC"
#define P_MAXIMUMREFERENCEFRAMES	"MaximumReferenceFrames"

// Rate Control
#define P_RATECONTROLMETHOD			"RateControlMethod"
#define P_RATECONTROLMETHOD_CQP		"RateControlMethod.CQP"
#define P_RATECONTROLMETHOD_CBR		"RateControlMethod.CBR"
#define P_RATECONTROLMETHOD_VBR		"RateControlMethod.VBR"
#define P_RATECONTROLMETHOD_VBRLAT	"RateControlMethod.VBRLAT"
#define P_PREPASSMODE				"PrePassMode"
#define P_PREPASSMODE_QUARTER		"PrePassMode.Quarter"
#define P_PREPASSMODE_HALF			"PrePassMode.Half"
#define P_PREPASSMODE_FULL			"PrePassMode.Full"
#define P_BITRATE_TARGET			"Bitrate.Target"
#define P_BITRATE_PEAK				"Bitrate.Peak"
#define P_QP_MINIMUM				"QP.Minimum" // H264
#define P_QP_MAXIMUM				"QP.Maximum" // H264
#define P_QP_IFRAME					"QP.IFrame"
#define P_QP_IFRAME_MINIMUM			"QP.IFrame.Minimum" // H265
#define P_QP_IFRAME_MAXIMUM			"QP.IFrame.Maximum" // H265
#define P_QP_PFRAME					"QP.PFrame"
#define P_QP_PFRAME_MINIMUM			"QP.PFrame.Minimum" // H265
#define P_QP_PFRAME_MAXIMUM			"QP.PFrame.Maximum" // H265
#define P_QP_BFRAME					"QP.BFrame" // H264
#define P_FILLERDATA				"FillerData"
#define P_FRAMESKIPPING				"FrameSkipping"
#define P_FRAMESKIPPING_PERIOD		"FrameSkipping.Period"
#define P_FRAMESKIPPING_BEHAVIOUR	"FrameSkipping.Behaviour"
#define P_FRAMESKIPPING_SKIPNTH		"FrameSkipping.SkipNth"
#define P_FRAMESKIPPING_KEEPNTH		"FrameSkipping.KeepNth"
#define P_VBAQ						"VBAQ"
#define P_ENFORCEHRD				"EnforceHRD"

// VBV Buffer
#define P_VBVBUFFER					"VBVBuffer"
#define P_VBVBUFFER_SIZE			"VBVBuffer.Size"
#define P_VBVBUFFER_STRICTNESS		"VBVBuffer.Strictness"
#define P_VBVBUFFER_INITIALFULLNESS	"VBVBuffer.InitialFullness"

// Picture Control
#define P_INTERVAL_KEYFRAME			"Interval.Keyframe"
#define P_PERIOD_IDR_H264			"Period.IDR.H264" // H264
#define P_PERIOD_IDR_H265			"Period.IDR.H265" // H265
#define P_INTERVAL_IFRAME			"Interval.IFrame"
#define P_PERIOD_IFRAME				"Period.IFrame"
#define P_INTERVAL_PFRAME			"Interval.PFrame"
#define P_PERIOD_PFRAME				"Period.PFrame"
#define P_INTERVAL_BFRAME			"Interval.BFrame"
#define P_PERIOD_BFRAME				"Period.BFrame"
#define P_GOP_TYPE					"GOP.Type" // H265
#define P_GOP_TYPE_FIXED			"GOP.Type.Fixed" // H265
#define P_GOP_TYPE_VARIABLE			"GOP.Type.Variable" // H265
#define P_GOP_SIZE					"GOP.Size" // H265
#define P_GOP_SIZE_MINIMUM			"GOP.Size.Minimum" // H265
#define P_GOP_SIZE_MAXIMUM			"GOP.Size.Maximum" // H265
#define P_GOP_ALIGNMENT				"GOP.Alignment"	// Both?
#define P_BFRAME_PATTERN			"BFrame.Pattern" // H264
#define P_BFRAME_DELTAQP			"BFrame.DeltaQP" // H264
#define P_BFRAME_REFERENCE			"BFrame.Reference" // H264
#define P_BFRAME_REFERENCEDELTAQP	"BFrame.ReferenceDeltaQP" // H264
#define P_DEBLOCKINGFILTER			"DeblockingFilter"
#define P_MOTIONESTIMATION			"MotionEstimation"
#define P_MOTIONESTIMATION_QUARTER	"MotionEstimation.Quarter"
#define P_MOTIONESTIMATION_HALF		"MotionEstimation.Half"
#define P_MOTIONESTIMATION_FULL		"MotionEstimation.Full"

// System
#define P_VIDEO_API					"Video.API"
#define P_VIDEO_ADAPTER				"Video.Adapter"
#define P_OPENCL_TRANSFER			"OpenCL.Transfer"
#define P_OPENCL_CONVERSION			"OpenCL.Conversion"
#define P_MULTITHREADING			"MultiThreading"
#define P_QUEUESIZE					"QueueSize"
#define P_DEBUG						"Debug"

#define P_VIEW						"View"
#define P_VIEW_BASIC				"View.Basic"
#define P_VIEW_ADVANCED				"View.Advanced"
#define P_VIEW_EXPERT				"View.Expert"
#define P_VIEW_MASTER				"View.Master"
enum class ViewMode :uint8_t {
	Basic,
	Advanced,
	Expert,
	Master
};

/// Other - Missing Functionality
//#define AMF_H264_MAXIMUMLTRFRAMES							TEXT_AMF_H264("MaximumLTRFrames")
//#define AMF_H264_MAXIMUMLTRFRAMES_DESCRIPTION				TEXT_AMF_H264("MaximumLTRFrames.Description")
//#define AMF_H264_MAXIMUMACCESSUNITSIZE						TEXT_AMF_H264("MaximumAccessUnitSize")
//#define AMF_H264_MAXIMUMACCESSUNITSIZE_DESCRIPTION			TEXT_AMF_H264("MaximumAccessUnitSize.Description")
//#define AMF_H264_HEADER_INSERTION_SPACING					TEXT_AMF_H264("HeaderInsertionSpacing")
//#define AMF_H264_HEADER_INSERTION_SPACING_DESCRIPTION		TEXT_AMF_H264("HeaderInsertionSpacing.Description")
//#define AMF_H264_SLICESPERFRAME								TEXT_AMF_H264("SlicesPerFrame")
//#define AMF_H264_SLICESPERFRAME_DESCRIPTION					TEXT_AMF_H264("SlicesPerFrame.Description")
//#define AMF_H264_SLICEMODE									TEXT_AMF_H264("SliceMode")
//#define AMF_H264_SLICEMODE_DESCRIPTION						TEXT_AMF_H264("SliceMode.Description")
//#define AMF_H264_MAXIMUMSLICESIZE							TEXT_AMF_H264("MaximumSliceSize")
//#define AMF_H264_MAXIMUMSLICESIZE_DESCRIPTION				TEXT_AMF_H264("MaximumSliceSize.Description")
//#define AMF_H264_SLICECONTROLMODE							TEXT_AMF_H264("SliceControlMode")
//#define AMF_H264_SLICECONTROLMODE_DESCRIPTION				TEXT_AMF_H264("SliceControlMode.Description")
//#define AMF_H264_SLICECONTROLSIZE							TEXT_AMF_H264("SliceControlSize")
//#define AMF_H264_SLICECONTROLSIZE_DESCRIPTION				TEXT_AMF_H264("SliceControlSize.Description")
//#define AMF_H264_INTRAREFRESH_NUMBEROFSTRIPES				TEXT_AMF_H264("IntraRefresh.NumberOfStripes")
//#define AMF_H264_INTRAREFRESH_NUMBEROFSTRIPES_DESCRIPTION	TEXT_AMF_H264("IntraRefresh.NumberOfStripes.Description")
//#define AMF_H264_INTRAREFRESH_MACROBLOCKSPERSLOT			TEXT_AMF_H264("IntraRefresh.MacroblocksPerSlot")
//#define AMF_H264_INTRAREFRESH_MACROBLOCKSPERSLOT_DESCRIPTION	TEXT_AMF_H264("IntraRefresh.MacroblocksPerSlot.Description")
